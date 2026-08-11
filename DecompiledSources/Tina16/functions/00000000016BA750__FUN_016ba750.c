/* Ghidra address: 016ba750 */
/* Ghidra symbol: FUN_016ba750 */


undefined1 * FUN_016ba750(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x33f) = 1;
  *param_2 = 0;
  while( true ) {
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x370) + -4);
    }
    if ((iVar1 < (int)(uint)*(byte *)(param_1 + 0x33f)) ||
       (*(short *)(*(longlong *)(param_1 + 0x370) + -2 + (ulonglong)*(byte *)(param_1 + 0x33f) * 2)
        == 0x7c)) break;
    FUN_004169a0(&local_10,param_2);
    FUN_00416780(&local_18,
                 *(undefined2 *)
                  (*(longlong *)(param_1 + 0x370) + -2 + (ulonglong)*(byte *)(param_1 + 0x33f) * 2))
    ;
    FUN_00416ad0(&local_10,local_18);
    FUN_00416910(param_2,local_10,0xff);
    *(char *)(param_1 + 0x33f) = *(char *)(param_1 + 0x33f) + '\x01';
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

