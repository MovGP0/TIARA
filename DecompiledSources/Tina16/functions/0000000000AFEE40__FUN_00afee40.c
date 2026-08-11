/* Ghidra address: 00afee40 */
/* Ghidra symbol: FUN_00afee40 */


void FUN_00afee40(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_2c [3];
  
  local_2c[0] = 0xffffffff;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x298);
  cVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,param_2,local_2c);
  if (cVar2 != '\0') {
    lVar3 = FUN_00a75120(plVar1,local_2c[0]);
    cVar2 = FUN_004113d0(lVar3,&PTR_FUN_00a7e788);
    if ((cVar2 != '\0') && (*(char *)(lVar3 + 0x40) != param_3)) {
      FUN_00aa65c0(*(undefined8 *)(param_1 + 0x8b0));
      *(char *)(lVar3 + 0x40) = param_3;
    }
  }
  return;
}

