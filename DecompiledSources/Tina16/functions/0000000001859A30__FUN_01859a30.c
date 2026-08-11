/* Ghidra address: 01859a30 */
/* Ghidra symbol: FUN_01859a30 */


void FUN_01859a30(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  byte *local_58;
  undefined1 *local_50;
  byte *local_48;
  int local_3c;
  
  iVar6 = (**(code **)(*param_3 + 0x48))();
  local_3c = 0;
  if (-1 < iVar6 + -1) {
    do {
      local_58 = (byte *)FUN_0060a050(param_3,local_3c);
      local_50 = (undefined1 *)FUN_00a3c240(param_2,local_3c);
      local_48 = (byte *)FUN_00a3c1b0(param_2,local_3c);
      iVar7 = (**(code **)(*param_3 + 0x60))();
      if (-1 < iVar7 + -1) {
        do {
          bVar1 = *local_58;
          bVar2 = local_58[1];
          bVar3 = local_58[2];
          bVar4 = local_58[3];
          local_58 = local_58 + 4;
          if (bVar4 == 0) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = 255.0 / (double)bVar4;
          }
          uVar5 = FUN_0040c770((double)bVar1 * dVar8);
          *local_50 = uVar5;
          uVar5 = FUN_0040c770((double)bVar2 * dVar8);
          local_50[1] = uVar5;
          uVar5 = FUN_0040c770((double)bVar3 * dVar8);
          local_50[2] = uVar5;
          local_50 = local_50 + 3;
          if (local_48 != (byte *)0x0) {
            *local_48 = bVar4;
            local_48 = local_48 + 1;
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_3c = local_3c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

