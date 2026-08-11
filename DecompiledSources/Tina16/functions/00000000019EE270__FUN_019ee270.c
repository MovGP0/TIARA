/* Ghidra address: 019ee270 */
/* Ghidra symbol: FUN_019ee270 */


undefined8 FUN_019ee270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  undefined1 local_128 [264];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      lVar3 = FUN_00418560(0x18,&DAT_019ec418);
      FUN_00414ad0(lVar3,local_res18[0]);
      *(undefined4 *)(lVar3 + 8) = 2;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x70);
      *(longlong *)(param_1 + 0x70) = lVar3;
      FUN_00414ad0(param_2,local_res18[0]);
LAB_019ee369:
      FUN_00414480(local_20);
      FUN_00414480(local_res18);
      return param_2;
    }
    iVar2 = FUN_00416db0(*puVar1,local_res18[0]);
    if (iVar2 == 0) {
      FUN_0040e840(local_128,*(undefined4 *)(puVar1 + 1));
      FUN_004169a0(local_20,local_128);
      FUN_00416cd0(param_2,3,local_res18[0],&LAB_019ee3c8,local_20[0]);
      *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
      goto LAB_019ee369;
    }
    puVar1 = (undefined8 *)puVar1[2];
  } while( true );
}

