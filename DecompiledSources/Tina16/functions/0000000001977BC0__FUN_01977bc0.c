/* Ghidra address: 01977bc0 */
/* Ghidra symbol: FUN_01977bc0 */


void FUN_01977bc0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x428) != 0) {
    (**(code **)(param_1 + 0x428))(*(undefined8 *)(param_1 + 0x430),param_1,param_2,0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') {
    if (((*(char *)(param_1 + 0x1e9) != '\0') || ((char)param_2 != '\0')) &&
       (*(char *)(param_1 + 0x270) != '\0')) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x230));
      *(undefined8 *)(param_1 + 0x230) = 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x210);
    if ((plVar1 != (longlong *)0x0) && ((char)param_2 == '\0')) {
      (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1,param_2,0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  return;
}

