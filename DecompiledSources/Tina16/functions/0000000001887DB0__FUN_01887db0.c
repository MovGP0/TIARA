/* Ghidra address: 01887db0 */
/* Ghidra symbol: FUN_01887db0 */


int FUN_01887db0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_01888970(param_1);
  iVar2 = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x40))(param_2);
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x50) + 0x20))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28),param_2,0,0xffffffff)
      ;
      cVar1 = (**(code **)(*(longlong *)(param_1 + 0x50) + 0x30))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38));
      if (cVar1 == '\0') {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = FUN_01887e40(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
        if (*(char *)(*(longlong *)(param_1 + 0x48) + 8) == '\x02') {
          iVar2 = FUN_01887e40(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
        }
      }
    }
  }
  return iVar2;
}

