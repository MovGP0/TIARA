/* Ghidra address: 013905a0 */
/* Ghidra symbol: FUN_013905a0 */


void FUN_013905a0(void)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  int local_90 [20];
  int local_40;
  int local_3c;
  undefined8 local_38 [3];
  
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_38[0] = 0;
  iVar6 = 10;
  piVar2 = &DAT_01f39724;
  piVar5 = local_90;
  do {
    *piVar5 = *piVar2;
    piVar5 = piVar5 + 2;
    piVar2 = piVar2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,local_38);
  uVar3 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38[0],0x20);
  FUN_00409da0(&local_a8,0);
  FUN_00441640(local_a0,local_a8);
  FUN_00416ba0(local_38,local_a0[0],L"Vhdl\\Packages\\ieee\\std_logic_1164\\std_logic_1164.dat");
  cVar1 = FUN_00440a20(local_38[0],1);
  if (cVar1 == '\0') {
    FUN_01390420(auStack_f8,&local_b0,"Hsvsrjs=xooro1=xooro=~ryx=*+");
    FUN_00416880(&local_b8,local_b0);
    FUN_01390530(auStack_f8,local_b8);
  }
  else {
    local_d0 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,local_38[0],0x20);
  }
  iVar6 = 0;
  piVar5 = local_90;
  do {
    FUN_004b6dc0(uVar3,(longlong)*piVar5);
    FUN_004b84c0(uVar3,&local_3c,4);
    lVar4 = (**(code **)*local_d0)(local_d0);
    FUN_004b6dc0(local_d0,lVar4 + -0x50 + (longlong)(iVar6 * 4));
    FUN_004b84c0(local_d0,&local_40,4);
    if (local_3c != local_40) {
      FUN_01390420(auStack_f8,&local_c0,"Hsvsrjs=xooro1=xooro=~ryx=*+");
      FUN_00416880(&local_c8,local_c0);
      FUN_01390530(auStack_f8,local_c8);
      break;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 2;
  } while (iVar6 != 10);
  FUN_00410f20(uVar3);
  FUN_00410f20(local_d0);
  FUN_00414480(&local_c8);
  FUN_004144d0(&local_c0);
  FUN_00414480(&local_b8);
  FUN_004144d0(&local_b0);
  FUN_00414560(&local_a8,2);
  FUN_00414480(local_38);
  return;
}

