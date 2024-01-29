/*이렇게 하나씩 체크하는건 시간이 많이 걸림*/
int access(int number[5],int index,int capacity){
    if (0 > index && index >capacity){
        assert(false);  
    }

    return number[index];

}