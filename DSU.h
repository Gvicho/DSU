//DSU 
//თანაუკვეთ სიმრავლეთა გაერთიანება


//Insert()_ ფუნქციის დროის კომპლექსურობა არის უეჭველად O(1)!
//Insert()_ fuction's time complexity is O(1) for sure!

//Find()_ ფუნქციის დროის კომპლექსურობა არის ამორტიზირებული O(1).
//Find()_ function's time complexity is amotized O(1).

//Unite()_ ფუნქციის დროის კომპლექსურობა არის ასევე ამორტიზირებული O(1). 
//Unite()_ funtion's time complexity is amortized O(1) too.

//მეხსიერების კომპლექსურობა არის წრფივი ანუ O(N).(ყოველთვის შეგიძლიათ Nmx_ის შეცვლა).
//Memory complexity of the structure is O(N).(take in mind that Nmx can be changed manually).
class DSU{
	private :
	static const int Nmx=100000;
	int dsu[Nmx],rankk[Nmx];
	public:
	DSU(){
		for(int i=0;i<Nmx;i++){dsu[i]=0;rankk[i]=0;}
	}
	void Insert(int a){
		if(dsu[a]==0){
			dsu[a]=a;
			rankk[a]=1;
		}
	}
	// Find ფუნქციაში რეალიზებულია გზების შეკუმშვის
	// პრინციპი,რაც სტრუქურას ბევრად ასწრაფებს!
	
	//In Find fuction, I have realized a 
	//road compressing principal,which makes 
	// structure much faster!
	int Find(int a){
		if(dsu[a]==0)return 0;
		if(dsu[a]==a)return a;
		dsu[a]=Find(dsu[a]);
		return dsu[a];
	}
	bool Same(int a,int b){
		return Find(a)==Find(b);
	}
	void Unite(int a,int b){
		a=Find(a);
		b=Find(b);
		if(rankk[a]>rankk[b]){
			dsu[b]=a;
		}else{
			dsu[a]=b;
			if(rankk[a]==rankk[b])++rankk[b];
		}
	}
};
