/* Ghidra address: 0084e230 */
/* Ghidra symbol: FUN_0084e230 */


longlong FUN_0084e230(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_3 == '\0') {
    puVar3 = (undefined8 *)(param_1 + 0x608);
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x610);
  }
  lVar2 = FUN_0084bd30(*puVar3,param_2);
  if (lVar2 == 0) {
    if (param_3 == '\0') {
      iVar1 = param_2 + 1;
    }
    else {
      iVar1 = -1 - param_2;
    }
    lVar2 = FUN_0084cb30(&LAB_0083bee0,1,param_1,iVar1);
    FUN_0084bf40(*puVar3,param_2,lVar2);
  }
  return lVar2;
}

