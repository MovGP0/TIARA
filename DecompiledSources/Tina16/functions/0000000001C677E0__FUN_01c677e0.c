/* Ghidra address: 01c677e0 */
/* Ghidra symbol: FUN_01c677e0 */


void FUN_01c677e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_240;
  undefined1 local_238 [256];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120 [2];
  undefined1 local_10c [256];
  undefined1 local_c [4];
  
  local_240 = 0;
  local_128 = 0;
  local_138 = 0;
  local_130 = 0;
  local_120[0] = 0;
  DAT_035667e0 = (**(code **)(param_1 + 0x27f8))(*(undefined8 *)(param_1 + 0x2800));
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    FUN_00441920(local_120,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_00414ad0(&DAT_035667c8,local_120[0]);
    FUN_01d3e870(PTR_DAT_02003fb8);
    FUN_00416910(local_10c,DAT_035667c8,0xff);
    FUN_004169a0(&local_130,local_10c);
    FUN_00441a10(&local_128,local_130);
    FUN_004169a0(&local_138,local_10c);
    uVar1 = FUN_004170c0(local_128,local_138,1);
    FUN_00415260(local_10c,0xff,uVar1,0xff);
    FUN_004169a0(&DAT_035667d0,local_10c);
    FUN_00416910(local_238,DAT_035667d0,0xff);
    DAT_035667d8 = FUN_01c676a0(local_238);
    uVar2 = FUN_01d34560(&PTR_FUN_01b9d7b8,1,5,5);
    *(undefined8 *)PTR_DAT_020040f0 = uVar2;
    FUN_01b9dd40("\tLABEL.CM2");
    FUN_01b9e760();
    DAT_035667e8 = FUN_01d34560(&PTR_FUN_00dae690,1,5,5);
    DAT_035667f8 = FUN_01d34560(&PTR_FUN_00dadb90,1,5,5);
    DAT_03566800 = FUN_01d34560(&PTR_FUN_00dadb90,1,5,5);
    DAT_03566808 = FUN_01d34560(&PTR_FUN_01b4b078,1,5,5);
    DAT_035667f0 = FUN_01d34560(&PTR_FUN_00dadb90,1,5,5);
    FUN_014b7d50(0xd,*(undefined8 *)(param_1 + 0x2788),1,0,0,0,local_c);
    FUN_01c662e0();
    FUN_01c66590();
    FUN_00410f20(*(undefined8 *)PTR_DAT_020040f0);
    FUN_00416ba0(&local_240,DAT_035667c8,L" successfully converted");
    FUN_016fd8d0(local_240);
  }
  FUN_00414480(&local_240);
  FUN_00414560(&local_138,4);
  return;
}

