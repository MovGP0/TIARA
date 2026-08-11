/* Ghidra address: 0156a380 */
/* Ghidra symbol: FUN_0156a380 */


void FUN_0156a380(longlong param_1,longlong *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(*param_2 + 0x10))(param_2);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),iVar5);
      cVar2 = FUN_0154d500(param_1,*(undefined8 *)(lVar4 + 0x40));
      if (((cVar2 == '\0') || (*(longlong *)(lVar4 + 0x40) == 0)) ||
         (*(char *)(*(longlong *)(lVar4 + 0x40) + 0x3d2) != '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((param_3 & 8) != 0) {
          FUN_004ae7e0(param_2,lVar4);
        }
      }
      else {
        uVar3 = FUN_0156a350(*(undefined4 *)(lVar4 + 0x54));
        if ((param_3 & uVar3) != 0) {
          FUN_004ae7e0(param_2,lVar4);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(local_30);
  return;
}

