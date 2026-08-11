/* Ghidra address: 01b3b0a0 */
/* Ghidra symbol: FUN_01b3b0a0 */


void FUN_01b3b0a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  
  local_30 = 0;
  uVar3 = FUN_0040f200(param_3,L".PCB");
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_3,L".REM CREATED BY TINA");
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_3,L".CON");
  FUN_0040f590(uVar3);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_3,L".COD 2");
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0040f590(param_3);
  FUN_00409900();
  iVar2 = FUN_019954d0(param_1);
  iVar2 = iVar2 + 2;
  iVar4 = 1;
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined8 **)(param_2 + 0x10 + (longlong)iVar4 * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_0040f590(param_3);
        FUN_00409900();
        uVar3 = FUN_0040f200(param_3,L".REM ");
        uVar3 = FUN_0040f200(uVar3,*(undefined8 *)(param_2 + (longlong)iVar4 * 0x18));
        FUN_0040f590(uVar3);
        FUN_00409900();
      }
      iVar5 = 0;
      for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[4]) {
        FUN_00414b50(&local_30,*puVar1);
        FUN_01b388b0(&local_30);
        uVar3 = FUN_0040f200(param_3,local_30);
        uVar3 = FUN_0040f3d0(uVar3,0x20);
        uVar3 = FUN_0040ef30(uVar3,*(undefined4 *)(puVar1 + 3));
        uVar3 = FUN_0040f3d0(uVar3,0x20);
        FUN_0040d060(uVar3);
        FUN_00409900();
        iVar5 = iVar5 + 1;
        if ((iVar5 == 8) && (puVar1[4] != 0)) {
          FUN_0040f590(param_3);
          FUN_00409900();
          uVar3 = FUN_0040f200(param_3,local_30);
          uVar3 = FUN_0040f3d0(uVar3,0x20);
          uVar3 = FUN_0040ef30(uVar3,*(undefined4 *)(puVar1 + 3));
          uVar3 = FUN_0040f3d0(uVar3,0x20);
          FUN_0040d060(uVar3);
          FUN_00409900();
          iVar5 = 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0040f590(param_3);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_3,L".EOD");
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_00414480(&local_30);
  return;
}

