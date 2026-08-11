/* Ghidra address: 01c93f00 */
/* Ghidra symbol: FUN_01c93f00 */


undefined4 FUN_01c93f00(longlong param_1,longlong param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong local_50;
  undefined1 local_3a [10];
  
  local_50 = param_2;
  if (param_2 == 0) {
    local_50 = *(longlong *)(param_1 + 0x2788);
  }
  if (*(longlong *)(param_1 + 0x2780) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar4);
        if ((local_50 == *(longlong *)(lVar3 + 0x10)) &&
           (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar4),
           *(char *)(lVar3 + 0x978) != '\0')) {
          if (param_3 != '\0') {
            lVar3 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
            cVar1 = FUN_01d0fb00(lVar3 + 0x40,PTR_DAT_02004010);
            if (cVar1 == '\0') {
              FUN_0199e310(*(undefined8 *)(lVar3 + 0x10),0,1,1);
            }
            FUN_00417c40(lVar3 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
          }
          uVar2 = FUN_01c94060(param_1,iVar4,local_3a,param_4);
          if (*(int *)(*(longlong *)(param_1 + 0x2780) + 0x10) != 0) {
            return uVar2;
          }
          FUN_01c77470(param_1,1);
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

