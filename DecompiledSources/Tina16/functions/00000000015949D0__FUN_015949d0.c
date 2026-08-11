/* Ghidra address: 015949d0 */
/* Ghidra symbol: FUN_015949d0 */


undefined4
FUN_015949d0(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
            undefined2 param_5,int param_6,byte *param_7,ushort param_8)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  ulonglong uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  undefined4 local_230;
  ushort local_22a;
  undefined1 local_220 [356];
  byte local_bc [64];
  byte local_7c [64];
  undefined1 local_3c [12];
  
  if (param_1 == 0) {
    local_230 = 1;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 10);
    if (uVar1 == 0) {
      local_230 = 2;
    }
    else {
      local_230 = 0;
      local_22a = 0;
      FUN_0040d200(local_3c,4,0);
      uVar5 = (longlong)(int)(param_8 - 1) % (longlong)(int)(uint)uVar1 & 0xffffffff;
      for (sVar7 = (short)((int)(param_8 - 1) / (int)(uint)uVar1) + 1; sVar7 != 0;
          sVar7 = sVar7 + -1) {
        FUN_015949b0(local_3c,uVar5);
        FUN_0040d200(local_bc,0x40,0);
        iVar6 = 1;
        iVar8 = param_6;
        if (0 < param_6) {
          do {
            FUN_015947e0(local_220,param_1,param_2,param_3);
            if (iVar6 == 1) {
              FUN_015948c0(local_220,param_4,param_5);
              FUN_015948c0(local_220,local_3c);
            }
            else {
              FUN_015948c0(local_220,local_7c);
            }
            FUN_015948e0(local_220,local_7c);
            pbVar2 = local_7c;
            pbVar3 = local_bc;
            uVar4 = uVar1;
            do {
              *pbVar3 = *pbVar3 ^ *pbVar2;
              pbVar3 = pbVar3 + 1;
              pbVar2 = pbVar2 + 1;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        pbVar2 = local_bc;
        uVar4 = uVar1;
        do {
          if (local_22a < param_8) {
            *param_7 = *pbVar2;
            local_22a = local_22a + 1;
            param_7 = param_7 + 1;
          }
          pbVar2 = pbVar2 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        uVar5 = 0;
      }
    }
  }
  return local_230;
}

