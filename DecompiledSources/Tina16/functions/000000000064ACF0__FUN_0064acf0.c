/* Ghidra address: 0064acf0 */
/* Ghidra symbol: FUN_0064acf0 */


longlong FUN_0064acf0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_30;
  
  lVar1 = FUN_0064aca0(param_1);
  lVar3 = 0;
  if (lVar1 != 0) {
    local_30 = FUN_0064d3a0(lVar1,param_1);
    lVar2 = FUN_00656230(lVar1,&local_30,param_2,0,0);
    lVar3 = lVar1;
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
  }
  return lVar3;
}

