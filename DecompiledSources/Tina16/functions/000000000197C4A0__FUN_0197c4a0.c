/* Ghidra address: 0197c4a0 */
/* Ghidra symbol: FUN_0197c4a0 */


undefined8 FUN_0197c4a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = (**(code **)(*param_1 + 0x268))(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_01980680(*(undefined8 *)(lVar1 + 0x208));
  }
  return uVar2;
}

