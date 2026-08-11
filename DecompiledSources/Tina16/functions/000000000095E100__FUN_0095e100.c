/* Ghidra address: 0095e100 */
/* Ghidra symbol: FUN_0095e100 */


bool FUN_0095e100(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,longlong *param_8)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  *param_8 = lVar1;
  lVar1 = *param_8;
  if (lVar1 == 0) {
    lVar2 = FUN_0095e1c0(&PTR_FUN_00912520,1,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                        );
    *param_8 = lVar2;
    (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],*param_8);
  }
  return lVar1 == 0;
}

