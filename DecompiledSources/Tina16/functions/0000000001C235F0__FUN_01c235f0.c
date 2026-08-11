/* Ghidra address: 01c235f0 */
/* Ghidra symbol: FUN_01c235f0 */


void FUN_01c235f0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    if (param_2 == 0) {
      if (param_3 != 0) {
        iVar3 = 0;
        while( true ) {
          iVar2 = FUN_01c232b0(param_1);
          if (iVar2 <= iVar3) break;
          lVar1 = FUN_01c233d0(param_1,iVar3);
          if (*(longlong *)(lVar1 + 8) == param_3) break;
          iVar3 = iVar3 + 1;
        }
        iVar2 = FUN_01c232b0(param_1);
        if (iVar3 < iVar2) {
          lVar1 = FUN_01c233d0(param_1,iVar3);
          *(undefined8 *)(lVar1 + 8) = 0;
        }
      }
    }
    else {
      *(undefined8 *)(param_2 + 8) = 0;
    }
  }
  else if (*(longlong *)(param_2 + 8) == param_3) {
    *(undefined8 *)(param_2 + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    (**(code **)(param_1 + 0x590))(*(undefined8 *)(param_1 + 0x598),param_1);
  }
  return;
}

