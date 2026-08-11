/* Ghidra address: 007fcca0 */
/* Ghidra symbol: FUN_007fcca0 */


void FUN_007fcca0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_00654ca0(param_1,param_2,param_3);
  if ((char)param_3 == '\0') {
    if ((((*(ushort *)(param_1 + 0x34) & 1) == 0) && (*(longlong *)(param_1 + 0x500) == 0)) &&
       (*(longlong *)(param_2 + 8) == param_1)) {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_007db330);
      if (cVar1 != '\0') {
        FUN_00800030(param_1,param_2);
      }
    }
  }
  else if ((char)param_3 == '\x01') {
    if (*(longlong *)(param_1 + 0x500) == param_2) {
      FUN_00800030(param_1,0);
    }
    if (*(longlong *)(param_1 + 0x518) == param_2) {
      FUN_007ffff0(param_1,0);
    }
    if (*(longlong *)(param_1 + 0x528) == param_2) {
      FUN_007fffb0(param_1,0);
    }
    if (*(longlong *)(param_1 + 0x648) == param_2) {
      FUN_00800510(param_1,0);
    }
    if (*(longlong *)(param_1 + 0x4b8) == param_2) {
      FUN_007ffeb0(param_1,0);
    }
    if (*(longlong *)(param_1 + 0x638) != 0) {
      iVar2 = FUN_004aeba0(*(longlong *)(param_1 + 0x638),param_2);
      if (-1 < iVar2) {
        FUN_004ae870(*(undefined8 *)(param_1 + 0x638),iVar2);
        FUN_004d2d90(param_2,param_1);
      }
    }
    if (*(longlong *)(param_1 + 0x650) != 0) {
      iVar2 = FUN_004aeba0(*(longlong *)(param_1 + 0x650),param_2);
      if (-1 < iVar2) {
        FUN_004ae870(*(undefined8 *)(param_1 + 0x650),iVar2);
        FUN_004d2d90(param_2,param_1);
      }
    }
    if (*(longlong *)(param_1 + 0x660) == param_2) {
      *(undefined8 *)(param_1 + 0x660) = 0;
    }
    if (*(longlong *)(param_1 + 0x550) == param_2) {
      *(undefined8 *)(param_1 + 0x550) = 0;
    }
    if (*(longlong *)(param_1 + 0x4b8) == param_2) {
      *(undefined8 *)(param_1 + 0x4b8) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x20))
              (*(longlong **)(param_1 + 0x510),param_2,param_3);
  }
  return;
}

