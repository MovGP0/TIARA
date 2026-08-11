/* Ghidra address: 006fb9c0 */
/* Ghidra symbol: FUN_006fb9c0 */


void FUN_006fb9c0(undefined8 param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_58 [9];
  byte local_4f;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_006d3e90();
    if (iVar2 < 0x40046) {
      iVar2 = FUN_006fd980(param_1);
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        while (((-1 < iVar2 &&
                (lVar4 = FUN_007017d0(param_1,0x417,(longlong)iVar2,local_58), lVar4 != 0)) &&
               ((local_4f & 1) != 0))) {
          iVar2 = iVar2 + -1;
        }
        if (iVar2 < 0) {
          lVar4 = FUN_0064fcf0(param_1,0x41d,0,&local_38);
          if (lVar4 != 0) {
            *param_3 = local_2c - local_34;
          }
        }
        else {
          lVar4 = FUN_0064fcf0(param_1,0x41d,(longlong)iVar2,&local_38);
          if (lVar4 != 0) {
            *param_3 = local_2c - local_34;
            *param_2 = local_30 - local_38;
          }
        }
      }
    }
    else {
      uVar3 = FUN_0064fca0(param_1,0x43a,0,0);
      *param_3 = (uint)((ulonglong)uVar3 >> 0x10) & 0xffff;
      *param_2 = (uint)uVar3 & 0xffff;
    }
  }
  return;
}

