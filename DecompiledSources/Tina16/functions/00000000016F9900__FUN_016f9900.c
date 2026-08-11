/* Ghidra address: 016f9900 */
/* Ghidra symbol: FUN_016f9900 */


longlong FUN_016f9900(void)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (DAT_0210ff30 == 0) {
    DAT_0210ff30 = FUN_016f9a50(&PTR_FUN_016f9218,1);
    FUN_00416cd0(&local_10,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_016f99c4,
                 L"vhdl\\packages\\ieee\\std_logic_signed\\std_logic_signed.dat");
    FUN_016fae30(DAT_0210ff30,local_10,1,1,0);
  }
  lVar1 = DAT_0210ff30;
  FUN_00414480(&local_10);
  return lVar1;
}

