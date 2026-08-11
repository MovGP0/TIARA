/* Ghidra address: 0095fb10 */
/* Ghidra symbol: FUN_0095fb10 */


bool FUN_0095fb10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  *param_6 = lVar1;
  lVar1 = *param_6;
  if (lVar1 == 0) {
    lVar2 = FUN_0095eb80(&PTR_FUN_00913638,1,param_1,param_2,param_3,param_4,param_5);
    *param_6 = lVar2;
    (**(code **)(*(longlong *)param_1[8] + 0x10))((longlong *)param_1[8],*param_6);
  }
  return lVar1 == 0;
}

