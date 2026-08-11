/* Ghidra address: 0095f9a0 */
/* Ghidra symbol: FUN_0095f9a0 */


bool FUN_0095f9a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8,
                 longlong *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_8 == '\x02') && (*(char *)((longlong)param_1 + 0x22) == '\0')) {
    uVar1 = FUN_0044d490(&PTR_FUN_009013a8,1,
                         L"Setting of predefined entity declarations not supported.");
    FUN_004134c0(uVar1);
  }
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  *param_9 = lVar2;
  lVar2 = *param_9;
  if (lVar2 == 0) {
    lVar3 = FUN_0095e3e0(&PTR_FUN_00912f38,1,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                         ,param_8);
    *param_9 = lVar3;
    (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],*param_9);
  }
  return lVar2 == 0;
}

