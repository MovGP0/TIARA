/* Ghidra address: 007e5c50 */
/* Ghidra symbol: FUN_007e5c50 */


ulonglong FUN_007e5c50(undefined8 param_1,undefined2 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar2 = (longlong *)FUN_007e5b00(param_1,param_2,0);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    (**(code **)(lVar1 + 0xb0))(plVar2);
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3 & 0xffffffff;
}

