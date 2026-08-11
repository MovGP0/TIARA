/* Ghidra address: 016942f0 */
/* Ghidra symbol: FUN_016942f0 */


void FUN_016942f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar2 = FUN_01d34560(&PTR_FUN_00dae160,1,5,5);
  (**(code **)(*plVar1 + 0x78))(plVar1,&DAT_016944f8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"l_limit");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"r_limit");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"i_subdiv");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"u_par");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"u_res");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"n_par");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"n_res");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"s_fname");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"pagename");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"flags");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"curvecolor");
  (**(code **)(*plVar1 + 0x78))(plVar1,L"curvewidth");
  FUN_00daed60(uVar2,(double)*(byte *)(param_1 + 0x650));
  FUN_00daed60(uVar2,*(undefined8 *)(param_1 + 0x720));
  FUN_00daed60(uVar2,*(undefined8 *)(param_1 + 0x728));
  FUN_00daed60(uVar2,(double)*(int *)(param_1 + 0x730));
  FUN_00daed90(uVar2,param_1 + 0x651);
  FUN_00daed90(uVar2,param_1 + 0x67a);
  FUN_00daed90(uVar2,param_1 + 0x6a3);
  FUN_00daed90(uVar2,param_1 + 0x6cc);
  FUN_00daed90(uVar2,param_1 + 0x6f5);
  FUN_00daed90(uVar2,param_1 + 0x744);
  FUN_00daed60(uVar2,(double)*(int *)(param_1 + 0x734));
  FUN_00daed60(uVar2,(double)*(int *)(param_1 + 0x738));
  FUN_00daed60(uVar2,(double)*(int *)(param_1 + 0x73c));
  FUN_013b30d0(*(undefined8 *)(param_1 + 0x550),&DAT_01694652,plVar1,uVar2);
  return;
}

