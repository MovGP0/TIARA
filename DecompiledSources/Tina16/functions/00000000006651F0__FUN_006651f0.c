/* Ghidra address: 006651f0 */
/* Ghidra symbol: FUN_006651f0 */


void FUN_006651f0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02012358;
  DAT_02012358 = 0;
  FUN_00410f20(uVar1);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02004030 = 0;
  FUN_00410f20(*(undefined8 *)PTR_DAT_02005950);
  *(undefined8 *)PTR_DAT_02005950 = 0;
  FUN_00410f20(DAT_020122b8);
  DAT_020122b8 = 0;
  FUN_00410f20(DAT_02012350);
  FUN_007831c0(&DAT_0075cd78);
  thunk_FUN_0418b98f(DAT_020122da);
  FUN_00414480(&DAT_020122e8);
  thunk_FUN_0418b98f(DAT_020122d8);
  FUN_00414480(&DAT_020122e0);
  if (DAT_01df89d0 != 0) {
    thunk_FUN_041c8c2f(DAT_01df89d0);
  }
  return;
}

