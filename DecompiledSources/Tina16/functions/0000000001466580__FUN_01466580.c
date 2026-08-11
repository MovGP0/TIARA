/* Ghidra address: 01466580 */
/* Ghidra symbol: FUN_01466580 */


void FUN_01466580(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_00410f20(*(undefined8 *)PTR_DAT_02005568);
  *(undefined8 *)PTR_DAT_02005568 = 0;
  uVar3 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)PTR_DAT_02005568 = uVar3;
  FUN_01d1c9b0(*(undefined8 *)(param_1 + 0x798));
  uVar3 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x750));
  iVar1 = FUN_01d1b660(*(undefined8 *)(param_1 + 0x798),uVar3);
  uVar2 = FUN_01d120a0(iVar1 + 4,0);
  (**(code **)(**(longlong **)PTR_DAT_02005568 + 0x88))(*(longlong **)PTR_DAT_02005568,uVar2);
  uVar3 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x750));
  iVar1 = FUN_01d1bfb0(*(undefined8 *)(param_1 + 0x798),uVar3);
  uVar2 = FUN_01d120a0(iVar1 + 6,0);
  (**(code **)(**(longlong **)PTR_DAT_02005568 + 0x70))(*(longlong **)PTR_DAT_02005568,uVar2);
  FUN_00603cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x750) + 0x318),
               *(undefined8 *)PTR_DAT_02005568);
  uVar3 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x750));
  FUN_01d1c9d0(*(undefined8 *)(param_1 + 0x798),uVar3,0,2,2);
  return;
}

