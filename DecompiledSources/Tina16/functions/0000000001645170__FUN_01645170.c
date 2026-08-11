/* Ghidra address: 01645170 */
/* Ghidra symbol: FUN_01645170 */


void FUN_01645170(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_0161bb20(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 0x78),param_2);
  *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x139f0) = param_2;
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18) + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18),iVar4);
      if ((*(char *)(lVar2 + 0x130) == '\0') &&
         ((cVar1 = FUN_01645040(*(undefined1 *)(lVar2 + 0x90)), cVar1 == '\0' ||
          (*(char *)(lVar2 + 0x90) == -0x39)))) {
        *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x139f8) = lVar2;
        FUN_0162c0e0(lVar2,*(undefined8 *)(param_2 + 8));
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x139f8) = 0;
        cVar1 = FUN_01615cd0(*(undefined8 *)(lVar2 + 8));
        if (cVar1 != '\0') {
          uVar3 = FUN_01615c90(*(undefined8 *)(lVar2 + 8));
          *(undefined8 *)(lVar2 + 8) = uVar3;
        }
        FUN_0162ac70(*(undefined8 *)(lVar2 + 8),0);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18),iVar4);
      if ((*(char *)(lVar2 + 0x130) == '\0') &&
         (((cVar1 = FUN_01645040(*(undefined1 *)(lVar2 + 0x90)), cVar1 == '\0' ||
           (*(char *)(lVar2 + 0x90) == -0x39)) && (*(char *)(lVar2 + 0x90) != -0x39)))) {
        if (*(char *)(*(longlong *)(lVar2 + 0x10) + 8) == '\x15') {
          FUN_00414b50(local_30,*(undefined8 *)(param_2 + 0x18));
        }
        else {
          lVar2 = FUN_01612bc0(*(longlong *)(lVar2 + 0x10),1);
          FUN_016477f0(param_2,local_30,*(undefined4 *)(lVar2 + 0xc));
        }
        cVar1 = FUN_01647c50(param_2,local_30[0]);
        if (cVar1 == '\0') {
          uVar3 = FUN_01648af0(param_2,local_30[0]);
          FUN_01647cc0(param_2,local_30[0],uVar3);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_01647fb0(param_2);
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x139f0) = 0;
  FUN_00414480(local_30);
  return;
}

