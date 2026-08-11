/* Ghidra address: 01601b80 */
/* Ghidra symbol: FUN_01601b80 */


undefined4 FUN_01601b80(undefined8 param_1,int *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_338 [776];
  
  uVar1 = FUN_01d3e3e0(param_1,2);
  *param_2 = 0;
  if ((char)uVar1 != '\0') {
    FUN_01d3da40(local_338,param_1);
    iVar2 = FUN_01d3e250(local_338,2);
    *param_2 = iVar2;
    iVar4 = 1;
    if (0 < iVar2) {
      do {
        iVar3 = FUN_01d3e360(param_1,iVar4,2);
        if (iVar3 != 4) {
          if (iVar4 == 1) {
            *param_3 = (char)iVar3;
          }
          if (iVar4 == 2) {
            *param_4 = (char)iVar3;
          }
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return uVar1;
}

