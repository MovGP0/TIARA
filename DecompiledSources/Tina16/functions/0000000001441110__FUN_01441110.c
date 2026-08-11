/* Ghidra address: 01441110 */
/* Ghidra symbol: FUN_01441110 */


void FUN_01441110(longlong param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  undefined2 *puVar2;
  double *pdVar3;
  undefined1 local_148 [256];
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [17];
  
  local_40[0] = 0;
  local_48 = 0;
  puVar2 = (undefined2 *)FUN_004095c0(0x40);
  if (puVar2 == (undefined2 *)0x0) {
    FUN_00ef4260(1,param_3);
  }
  else {
    *(undefined2 **)(param_1 + 0xa8) = puVar2;
    *(undefined1 *)(puVar2 + 1) = 0;
    (**(code **)(*param_2 + 0x288))(param_2,&local_48);
    FUN_00416ba0(local_40,&DAT_014412bc,local_48);
    FUN_00416910(local_148,local_40[0],0xff);
    FUN_00415020(puVar2 + 8,local_148,0x28);
    pdVar3 = (double *)FUN_01cfde70(param_2,1,0,local_29,&local_2a,&local_2b);
    dVar1 = *pdVar3;
    pdVar3 = (double *)FUN_01cfde70(param_2,2,0,local_29,&local_2a,&local_2b);
    *(double *)(puVar2 + 4) = (dVar1 * dVar1) / *pdVar3;
    *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
    *puVar2 = *(undefined2 *)(param_3 + 0x10);
  }
  FUN_00414560(&local_48,2);
  return;
}

