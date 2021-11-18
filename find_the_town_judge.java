class Solution {
    
    public int findJudge(int n, int[][] trust) {
               
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(n+1);
        
        for (int i = 0; i < n+1; i++)
            adj.add(new ArrayList<Integer>());
     
        for(int i=0; i<trust.length; i++) {
            adj.get(trust[i][0]).add(trust[i][1]);
        }
        
        for(int i=1; i<n+1; i++) {
            if(adj.get(i).size()==0) {
                int counter = 0;
                for(int j=1; j<n+1; j++) {
                    if(adj.get(j).contains(i) && j!=i) {
                        counter++;
                    }
                }
                if(counter==n-1) return i;
            }
        }
        
        return -1;
    }
}