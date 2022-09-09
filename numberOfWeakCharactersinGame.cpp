class Solution {
    
    private :
    
    static bool sortbycomparator(vector<int>& a, vector<int>& b){
        
        if(a[0] == b[0])
            return a[1] > b[1] ;
        
        return a[0] < b[0] ;
    }
    
    
public:
    int numberOfWeakCharacters(vector<vector<int>>& prop ) {
        
        sort( prop.begin(), prop.end() , sortbycomparator ) ;
        
        int weakchars = 0 , maxdefence = INT_MIN , n = prop.size() ;
        
        for( int i = n-1 ; i >= 0 ; --i ){
            
            if( prop[i][1] < maxdefence ){
                
                weakchars++ ;
            }
            
            if( prop[i][1] > maxdefence ){
                
                maxdefence = prop[i][1] ;
            }
        }
        
        return weakchars ;
    }
};
