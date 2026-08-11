/* Ghidra address: 00aa1700 */
/* Ghidra symbol: FUN_00aa1700 */


void FUN_00aa1700(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((*(char *)(param_1 + 0x4ec) != '\0') &&
     ((((*param_3 != *param_4 || (param_3[1] != param_4[1])) || (param_3[2] != param_4[2])) ||
      (param_3[3] != param_4[3])))) {
    local_28 = *(undefined4 *)(param_1 + 0x4b4);
    local_24 = *(undefined4 *)(param_1 + 0x4a8);
    local_20 = *(undefined4 *)(param_1 + 0x4ac);
    local_1c = *(undefined4 *)(param_1 + 0x4b0);
    local_2c = CONCAT13(*(undefined1 *)(param_1 + 0x4c0),
                        CONCAT12(*(undefined1 *)(param_1 + 0x4bc),
                                 CONCAT11(*(undefined1 *)(param_1 + 0x4b8),
                                          *(undefined1 *)(param_1 + 0x4c4))));
    FUN_00a75130(param_2,param_3,param_4,&local_28,local_2c,*(undefined4 *)(param_1 + 0x450),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x92),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x90));
  }
  return;
}

