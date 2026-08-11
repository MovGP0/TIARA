/* Ghidra address: 0114e6b0 */
/* Ghidra symbol: FUN_0114e6b0 */


void FUN_0114e6b0(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  FUN_0113f830(param_1,param_2,&DAT_020301e8,&DAT_020301f0);
  FUN_0113f760(DAT_020301e8,DAT_020301f0,PTR_DAT_02004010 + 1000);
  plVar2 = (longlong *)
           FUN_0114c680(&PTR_FUN_0114b798,1,*(undefined8 *)PTR_DAT_02004030,param_1,param_2);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_013d99f0(plVar2[0xf8],PTR_DAT_02004010[0x415],PTR_DAT_02004010[0x413],
                 PTR_DAT_02004010[0x414],param_2 & 0xffffffffffffff00);
  }
  *(longlong *)PTR_DAT_02001288 = plVar2[0xf8];
  FUN_00410f20(plVar2);
  return;
}

