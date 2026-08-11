/* Ghidra address: 01974160 */
/* Ghidra symbol: FUN_01974160 */


void FUN_01974160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  plVar2 = (longlong *)FUN_0184cde0(*(undefined8 *)(param_1 + 0x248),param_2);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x248);
    pcVar3 = (code *)FUN_00411550(uVar1,0xffe7);
    (*pcVar3)(uVar1,param_2,param_3);
  }
  else {
    FUN_00468700(&local_40,param_3);
    (**(code **)(*plVar2 + 8))(plVar2,&local_40);
  }
  FUN_00460ba0(&local_40);
  return;
}

