/* Ghidra address: 0040f3d0 */
/* Ghidra symbol: FUN_0040f3d0 */


longlong FUN_0040f3d0(longlong param_1,ushort param_2)

{
  ushort local_res10 [12];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  if (*(short *)(param_1 + 0x2e8) == 0) {
    FUN_0040ea40(param_1);
  }
  if (*(short *)(param_1 + 0x2e8) == 0x4b0) {
    FUN_0040eaa0(param_1,local_res10,2);
  }
  else if (*(char *)(param_1 + 0x2ea) < '\x01') {
    if ((local_res10[0] < 0xd800) || (0xdbff < local_res10[0])) {
      FUN_00416780(&local_18,local_res10[0]);
      FUN_0040f220(param_1,local_18,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x2ea) = 2;
      *(ushort *)(param_1 + 0x2ec) = local_res10[0];
    }
  }
  else {
    if ((0xdbff < local_res10[0]) && (local_res10[0] < 0xe000)) {
      *(ushort *)(param_1 + 0x2ee) = local_res10[0];
      *(undefined2 *)(param_1 + 0x2f0) = 0;
      FUN_00416830(&local_10,param_1 + 0x2ec,3);
      FUN_0040f220(param_1,local_10,0);
    }
    *(undefined1 *)(param_1 + 0x2ea) = 0;
  }
  FUN_00414560(&local_18,2);
  return param_1;
}

