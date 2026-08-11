/* Ghidra address: 00630400 */
/* Ghidra symbol: FUN_00630400 */


undefined8 FUN_00630400(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffe;
  if (((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
       (*(longlong *)(param_1 + 0x38) != 0)) &&
      ((plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0 && (*plVar1 == param_1)))
      ) && ((int)plVar1[1] - 0x3f34U < 0x20)) {
    if ((param_2 != 0) && ((int)plVar1[7] != 0)) {
      FUN_00626670(param_2,(ulonglong)*(uint *)((longlong)plVar1 + 0x3c) + plVar1[8],
                   (int)plVar1[7] - *(uint *)((longlong)plVar1 + 0x3c));
      FUN_00626670(((ulonglong)*(uint *)(plVar1 + 7) + param_2) -
                   (ulonglong)*(uint *)((longlong)plVar1 + 0x3c),plVar1[8]);
    }
    uVar2 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)plVar1[7];
    }
  }
  return uVar2;
}

