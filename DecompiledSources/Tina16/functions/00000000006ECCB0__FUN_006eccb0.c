/* Ghidra address: 006eccb0 */
/* Ghidra symbol: FUN_006eccb0 */


void FUN_006eccb0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 != *(char *)(param_1 + 0x492)) {
    *(char *)(param_1 + 0x492) = param_2;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x403,param_2,*(undefined1 *)(param_1 + 0x491));
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x401,
                       CONCAT11(*(undefined1 *)(param_1 + 0x491),*(undefined1 *)(param_1 + 0x494)),0
                      );
  }
  return;
}

