/* Ghidra address: 01977740 */
/* Ghidra symbol: FUN_01977740 */


void FUN_01977740(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x408) != 0) {
    (**(code **)(param_1 + 0x408))(*(undefined8 *)(param_1 + 0x410),param_1,param_2,0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') {
    if (((*(char *)(param_1 + 0x1e9) != '\0') || ((char)param_2 != '\0')) &&
       (*(char *)(param_1 + 0x270) != '\0')) {
      if (*(longlong *)(param_1 + 0x230) != 0) {
        FUN_00410f20(*(longlong *)(param_1 + 0x230));
      }
      uVar2 = FUN_0181a5c0(&PTR_FUN_0181beb8,1,0);
      *(undefined8 *)(param_1 + 0x230) = uVar2;
      FUN_0181c9a0(uVar2,0,0,1,0);
    }
    plVar1 = *(longlong **)(param_1 + 0x210);
    if ((plVar1 != (longlong *)0x0) && ((char)param_2 == '\0')) {
      (**(code **)(*plVar1 + 0x2c8))(plVar1,param_1,param_2,0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  return;
}

