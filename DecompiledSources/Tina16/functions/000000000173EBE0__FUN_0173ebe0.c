/* Ghidra address: 0173ebe0 */
/* Ghidra symbol: FUN_0173ebe0 */


void FUN_0173ebe0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0173d820(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,1);
  }
  else {
    (**(code **)(*param_1 + 0xa8))(param_1,0);
  }
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  iVar2 = FUN_01d07010(param_1[5]);
  if (iVar2 == 0) {
    FUN_0173cbf0(0);
  }
  if (param_1[6] != 0) {
    FUN_019af200(param_1[6],param_1[5]);
  }
  uVar3 = FUN_019a45d0();
  uVar3 = FUN_0198d430(uVar3);
  (**(code **)(*param_1 + 0x48))(param_1,uVar3);
  uVar3 = FUN_019a45d0();
  FUN_0199e310(uVar3,1,1,0);
  (**(code **)(*(longlong *)param_1[5] + 0x1c0))((longlong *)param_1[5],1,0);
  return;
}

