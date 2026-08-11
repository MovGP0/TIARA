/* Ghidra address: 00b614b0 */
/* Ghidra symbol: FUN_00b614b0 */


void FUN_00b614b0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_40[0] = 0;
  local_30 = FUN_00b41f60(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xa0),
                          *(undefined4 *)(param_1 + 0x2c));
  local_50 = *(int *)(local_30 + 8);
  local_4c = *(int *)(local_30 + 0x38);
  local_48 = *(int *)(local_30 + 0x3c);
  if (-1 < local_50) {
    iVar1 = FUN_00b59a10(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8));
    if (local_50 < iVar1) goto LAB_00b61552;
  }
  uVar6 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
  FUN_004134c0(uVar6);
LAB_00b61552:
  if ((local_4c < 0) || (0xffff < local_4c)) {
    uVar6 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar6);
  }
  if ((local_48 < 0) || (0xff < local_48)) {
    uVar6 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
    FUN_004134c0(uVar6);
  }
  lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       local_50);
  uVar6 = FUN_00b52ce0(*(undefined8 *)(lVar7 + 0x18),*(undefined2 *)(local_30 + 0xc));
  uVar2 = FUN_00b51ae0(uVar6);
  iVar1 = FUN_00b413c0(*(undefined4 *)(local_30 + 0x10),uVar2);
  lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       local_50);
  uVar6 = FUN_00b52ce0(*(undefined8 *)(lVar7 + 0x18),*(undefined2 *)(local_30 + 0x1c));
  uVar2 = FUN_00b51ae0(uVar6);
  iVar3 = FUN_00b413c0(*(undefined4 *)(local_30 + 0x20),uVar2);
  lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       local_50);
  uVar6 = FUN_00b53830(*(undefined8 *)(lVar7 + 0x20),*(undefined2 *)(local_30 + 0x14));
  uVar2 = FUN_00b50950(uVar6);
  local_44 = FUN_00b41430(*(undefined4 *)(local_30 + 0x18),uVar2);
  lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       local_50);
  uVar6 = FUN_00b53830(*(undefined8 *)(lVar7 + 0x20),*(undefined2 *)(local_30 + 0x24));
  uVar2 = FUN_00b50950(uVar6);
  iVar4 = FUN_00b41430(*(undefined4 *)(local_30 + 0x28),uVar2);
  iVar3 = iVar3 - iVar1;
  iVar1 = *(int *)(local_30 + 0xc);
  iVar8 = *(int *)(local_30 + 0x1c) + -1;
  if (iVar1 <= iVar8) {
    iVar8 = (iVar8 - iVar1) + 1;
    do {
      lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                           local_50);
      uVar6 = FUN_00b52ce0(*(undefined8 *)(lVar7 + 0x18),iVar1);
      iVar5 = FUN_00b51ae0(uVar6);
      iVar3 = iVar3 + iVar5;
      iVar1 = iVar1 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar4 = iVar4 - local_44;
  iVar1 = *(int *)(local_30 + 0x14);
  iVar8 = *(int *)(local_30 + 0x24) + -1;
  if (iVar1 <= iVar8) {
    iVar8 = (iVar8 - iVar1) + 1;
    do {
      lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                           local_50);
      uVar6 = FUN_00b53830(*(undefined8 *)(lVar7 + 0x20),iVar1);
      iVar5 = FUN_00b50950(uVar6);
      iVar4 = iVar4 + iVar5;
      iVar1 = iVar1 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  lVar7 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 8),
                       local_50);
  uVar6 = FUN_00b39e30(*(undefined8 *)(lVar7 + 0x78),local_4c,local_48);
  FUN_00b39420(uVar6,*(undefined8 *)(local_30 + 0x40));
  FUN_00b39490(uVar6,*(undefined8 *)(local_30 + 0x48));
  FUN_00b39560(uVar6,iVar3);
  FUN_00b395a0(uVar6,iVar4);
  FUN_00b61330(auStack_78,local_40,*(undefined8 *)(local_30 + 0x50));
  FUN_00b39500(uVar6,local_40[0]);
  FUN_004144d0(local_40);
  return;
}

