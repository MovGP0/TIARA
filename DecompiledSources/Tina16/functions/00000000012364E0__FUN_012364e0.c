/* Ghidra address: 012364e0 */
/* Ghidra symbol: FUN_012364e0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012364e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110 [29];
  undefined8 local_28;
  undefined8 local_20;
  
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110[0] = 0;
  local_20 = 0;
  local_28 = 0;
  _DAT_021076b0 = FUN_007ffbe0(param_1);
  DAT_021076a8 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x738));
  DAT_021076b8 = DAT_021076a8;
  DAT_021076c0 = DAT_021076a8;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x9f8),0);
  (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x128))(*(longlong **)(param_1 + 0x9f8),0);
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\");
  FUN_00416ba0(local_110,local_28,L"ANA_BS_B_.DTB");
  cVar1 = FUN_00440a20(local_110[0],1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_118,local_28,L"ANA_BP_B_.DTB");
    cVar1 = FUN_00440a20(local_118,1);
    if (cVar1 != '\0') {
      FUN_00416ba0(&local_120,local_28,L"ANA_HP_B_.DTB");
      cVar1 = FUN_00440a20(local_120,1);
      if (cVar1 != '\0') {
        FUN_00416ba0(&local_128,local_28,L"ANA_LP_B_.DTB");
        cVar1 = FUN_00440a20(local_128,1);
        if (cVar1 != '\0') {
          FUN_00416ba0(&local_130,local_28,L"ANA_BS_B_.DTB");
          FUN_01182570(PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0,local_130);
          FUN_00416ba0(&local_138,local_28,L"ANA_BP_B_.DTB");
          FUN_01182570(PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0,local_138);
          FUN_00416ba0(&local_140,local_28,L"ANA_HP_B_.DTB");
          FUN_01182570(PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0,local_140);
          FUN_00416ba0(&local_148,local_28,L"ANA_LP_B_.DTB");
          FUN_01182570(PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0,local_148);
          FUN_0122e8c0(param_1,param_2);
          goto code_r0x0123675e;
        }
      }
    }
  }
  FUN_0072d440(L"Filter config files not found!",1,4,0);
code_r0x0123675e:
  FUN_00414560(&local_148,8);
  FUN_00414560(&local_28,2);
  return;
}

