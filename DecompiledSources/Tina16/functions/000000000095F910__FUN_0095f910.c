/* Ghidra address: 0095f910 */
/* Ghidra symbol: FUN_0095f910 */


bool FUN_0095f910(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  *param_5 = lVar1;
  lVar1 = *param_5;
  if (lVar1 == 0) {
    lVar2 = FUN_0095ed40(&PTR_FUN_009129e0,1,param_1,param_2,param_3,param_4);
    *param_5 = lVar2;
    (**(code **)(*(longlong *)param_1[6] + 0x10))((longlong *)param_1[6],*param_5);
  }
  return lVar1 == 0;
}

