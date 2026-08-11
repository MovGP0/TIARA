/* Ghidra address: 00ae56f0 */
/* Ghidra symbol: FUN_00ae56f0 */


void FUN_00ae56f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = *param_3;
  uVar3 = param_3[1];
  *(longlong *)(param_1 + 0x68) = param_2;
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0x60);
  *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8));
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = FUN_00a52510(&PTR_FUN_00a4ffc0,1,uVar4,*(undefined1 *)(param_1 + 0xe0));
  FUN_004ae7e0(uVar4,uVar3);
  uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00a529f0(uVar4,*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x280) +
                      0x80));
  lVar5 = *(longlong *)(param_1 + 0xe8);
  *(undefined4 *)(lVar5 + 0x28) = 0xffffffff;
  plVar1 = *(longlong **)(param_1 + 0x98);
  cVar2 = FUN_004113d0(plVar1,&DAT_00aea600);
  if (cVar2 != '\0') {
    lVar5 = FUN_004aeac0(lVar5,0);
    (**(code **)(*plVar1 + 0x280))(plVar1,*(undefined4 *)(lVar5 + 0x70));
  }
  uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),0);
  uVar4 = FUN_00aa4ff0(&PTR_FUN_00a8b450,1,*(undefined8 *)(param_1 + 0x68),0,uVar4);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),uVar4,*(undefined4 *)(param_1 + 0x7c));
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xa8);
  uVar4 = FUN_00a72ca0(&DAT_00a69b68,1);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0x50) = 3;
  FUN_00414480(param_1 + 0x10);
  FUN_00414480(param_1 + 0x18);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20);
  *(undefined1 *)(lVar5 + 0x30a) = 0;
  *(undefined8 *)(lVar5 + 0x310) = 0;
  uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0xe8),
                       *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1);
  uVar4 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),0,uVar4,0,1);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  uVar4 = FUN_00610ca0(&PTR_FUN_00a691f8,1);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined1 *)(param_1 + 0x82) = 0;
  FUN_00ad47e0(param_1,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  return;
}

