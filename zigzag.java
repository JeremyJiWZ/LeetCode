public class Solution {
    public String convert(String s, int numRows) {
        int i,dist;
        if(numRows==1) return s;
        StringBuilder sb = new StringBuilder();
        dist=2*numRows-2;
        for(i=0;i<numRows;i++){
            fill(sb,i,dist,2*numRows-2,s);
            dist-=2;
        }
        return sb.toString();
    }
    public void fill(StringBuilder sb, int nRow, int distance, int magic, String s){
        int index = nRow;
        if(nRow==0||distance==0){
            distance=magic;
            while(index<s.length()){
                sb.append(s.charAt(index));
                index+=distance;
            }
        }
        else{
            while(index<s.length()){
                sb.append(s.charAt(index));
                index+=distance;
                distance=magic-distance;
            }
        }
    }
}