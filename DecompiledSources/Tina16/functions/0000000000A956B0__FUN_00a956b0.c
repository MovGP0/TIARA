/* Ghidra address: 00a956b0 */
/* Ghidra symbol: FUN_00a956b0 */


void FUN_00a956b0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((param_2 != *(char *)(param_1 + 0x1a9)) && (*(char *)(param_1 + 0x1aa) != '\0')) {
    cVar3 = FUN_004113d0(*(undefined8 *)(param_1 + 0x198),&PTR_FUN_00a438f8);
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x18);
      if (param_2 == '\0') {
        FUN_00a089f0(lVar1,0);
        if (*(int *)(lVar1 + 0x90) < 4) {
          FUN_00a08a50(lVar1,1);
        }
        FUN_004aee50(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1c0),
                     *(undefined8 *)(param_1 + 0x198),0);
      }
      else if (*(int *)(lVar1 + 0x90) == 2) {
        FUN_00a08a50(lVar1,2);
      }
      else if (*(int *)(lVar1 + 0x90) == 3) {
        if (param_2 == '\x02') {
          FUN_00a08a50(lVar1,3);
        }
        else {
          FUN_00a08a50(lVar1,2);
        }
      }
      else {
        FUN_00a089f0(lVar1,1);
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1c0),
                     *(undefined8 *)(param_1 + 0x198));
      }
      *(char *)(param_1 + 0x1a9) = param_2;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xc0);
      (**(code **)(*plVar2 + 0x180))(plVar2);
    }
  }
  return;
}

