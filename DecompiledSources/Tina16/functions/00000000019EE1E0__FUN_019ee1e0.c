/* Ghidra address: 019ee1e0 */
/* Ghidra symbol: FUN_019ee1e0 */


undefined4 FUN_019ee1e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined4 local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1c = 1;
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_019ee233:
      FUN_00414480(local_res10);
      return local_1c;
    }
    iVar2 = FUN_00416db0(*puVar1,local_res10[0]);
    if (iVar2 == 0) {
      local_1c = *(undefined4 *)(puVar1 + 1);
      goto LAB_019ee233;
    }
    puVar1 = (undefined8 *)puVar1[2];
  } while( true );
}

