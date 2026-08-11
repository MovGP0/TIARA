/* Ghidra address: 0140a890 */
/* Ghidra symbol: FUN_0140a890 */


void FUN_0140a890(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_128 [44];
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  longlong local_e8 [3];
  int local_d0;
  int local_cc;
  int local_c8;
  double local_c0;
  double local_b8;
  char local_98;
  double local_90;
  
  plVar6 = local_e8;
  for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar6 = *param_1;
    param_1 = param_1 + 1;
    plVar6 = plVar6 + 1;
  }
  dVar10 = 0.0;
  local_90 = local_c0 * 3.0;
  local_f0 = local_d0;
  local_ec = local_cc;
  iVar1 = FUN_0040c770(local_b8 / local_c0);
  uVar4 = iVar1 - local_f0 >> 0x1f;
  iVar2 = FUN_0040c770((double)(int)((iVar1 - local_f0 ^ uVar4) - uVar4));
  if (iVar1 < local_f0) {
    uVar4 = iVar1 - local_f0 >> 0x1f;
    local_90 = local_90 + (double)(int)((iVar1 - local_f0 ^ uVar4) - uVar4) * local_c0;
  }
  if (local_f0 < iVar1) {
    uVar4 = iVar1 - local_f0 >> 0x1f;
    dVar10 = (double)(int)((iVar1 - local_f0 ^ uVar4) - uVar4) * local_c0;
  }
  local_fc = 1;
  do {
    FUN_0140a6a0(param_2[(longlong)local_fc + -1]);
    if ((local_fc == 3) || (local_98 != '\0')) {
      FUN_0140a720(param_2[(longlong)local_fc + -1],1);
    }
    local_fc = local_fc + 1;
  } while (local_fc != 4);
  FUN_0140a760(0,0,param_2[2],0);
  FUN_0140a760(0,0,*param_2,0);
  FUN_0140a760(0,0,param_2[1],0);
  FUN_0140a760(local_c0 / 2.0,1,param_2[2],0);
  FUN_0140a760(local_c0,0,param_2[2],0);
  dVar9 = local_c0 * 4.0 + local_c0 / 2.0;
  dVar11 = local_c0 / 2.0 + local_c0;
  if (local_98 != '\0') {
    FUN_0140a760(dVar11,0,*param_2,1);
    FUN_0140a720(*param_2,2);
  }
  local_fc = local_ec;
  if (local_ec <= local_c8) {
    iVar7 = (local_c8 - local_ec) + 1;
    dVar8 = dVar11;
    do {
      local_f4 = *(undefined4 *)(local_e8[1] + (longlong)local_fc * 4);
      if ((local_ec < local_fc) && (iVar1 < local_f0)) {
        dVar12 = (double)iVar2 * local_c0;
      }
      else {
        dVar12 = 0.0;
      }
      FUN_0140a820(auStack_128,dVar8 - dVar12);
      local_f8 = local_f0 + -1;
      if (-1 < local_f8) {
        do {
          uVar3 = FUN_01aa0c20(local_f8 + 1,local_f4);
          FUN_0140a760(dVar9,uVar3,*param_2,local_98);
          dVar9 = dVar9 + local_c0;
          local_f8 = local_f8 + -1;
        } while (local_f8 != -1);
      }
      FUN_0140a760(dVar9,0,*param_2,local_98);
      dVar8 = dVar8 + (double)iVar1 * local_c0 + local_90;
      dVar9 = dVar9 + dVar10 + local_c0 * 3.0;
      if (local_fc == local_c8) {
        if (local_98 == '\0') {
          FUN_0140a820(auStack_128,dVar8 - dVar12);
        }
        else {
          FUN_0140a760(dVar8 - dVar11,0,param_2[1],1);
        }
      }
      local_fc = local_fc + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

