/* Ghidra address: 00a1b6d0 */
/* Ghidra symbol: FUN_00a1b6d0 */


void FUN_00a1b6d0(longlong *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  
  param_4 = param_4 + param_3;
  if ((((param_3 < 0xe) || (*param_2 != 'J')) || (param_2[1] != 'F')) ||
     (((param_2[2] != 'I' || (param_2[3] != 'F')) || (param_2[4] != '\0')))) {
    if (((param_3 < 6) || (*param_2 != 'J')) ||
       ((param_2[1] != 'F' || (((param_2[2] != 'X' || (param_2[3] != 'X')) || (param_2[4] != '\0')))
        ))) {
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + 0x28) = 0x4d;
    }
    else {
      cVar1 = param_2[5];
      if (cVar1 == '\x13') {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x6e;
      }
      else if (cVar1 == '\x11') {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x6d;
      }
      else {
        if (cVar1 != '\x10') {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x59;
          *(uint *)(lVar5 + 0x2c) = (uint)(byte)param_2[5];
          *(int *)(lVar5 + 0x30) = param_4;
          goto LAB_00a1b73d;
        }
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x6c;
      }
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x174) = 1;
    cVar1 = param_2[5];
    *(char *)(param_1 + 0x2f) = cVar1;
    *(char *)((longlong)param_1 + 0x179) = param_2[6];
    *(char *)((longlong)param_1 + 0x17a) = param_2[7];
    uVar3 = CONCAT11(param_2[8],param_2[9]);
    *(ushort *)((longlong)param_1 + 0x17c) = uVar3;
    uVar2 = CONCAT11(param_2[10],param_2[0xb]);
    *(ushort *)((longlong)param_1 + 0x17e) = uVar2;
    if (cVar1 == '\x01') {
      uVar7 = 1;
    }
    else {
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + 0x28) = 0x77;
      *(uint *)(lVar5 + 0x2c) = (uint)*(byte *)(param_1 + 0x2f);
      *(uint *)(lVar5 + 0x30) = (uint)*(byte *)((longlong)param_1 + 0x179);
      (**(code **)(lVar5 + 8))(param_1,0xffffffff);
      uVar7 = (uint)*(byte *)(param_1 + 0x2f);
      uVar2 = *(ushort *)((longlong)param_1 + 0x17e);
      uVar3 = *(ushort *)((longlong)param_1 + 0x17c);
    }
    lVar5 = *param_1;
    *(uint *)(lVar5 + 0x2c) = uVar7;
    *(uint *)(lVar5 + 0x30) = (uint)*(byte *)((longlong)param_1 + 0x179);
    *(uint *)(lVar5 + 0x34) = (uint)uVar3;
    *(uint *)(lVar5 + 0x38) = (uint)uVar2;
    *(uint *)(lVar5 + 0x3c) = (uint)*(byte *)((longlong)param_1 + 0x17a);
    *(undefined4 *)(lVar5 + 0x28) = 0x57;
    (**(code **)(lVar5 + 8))(param_1,1);
    bVar4 = param_2[0xc];
    bVar6 = param_2[0xd];
    if (bVar6 != 0 || bVar4 != 0) {
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + 0x28) = 0x5a;
      *(uint *)(lVar5 + 0x2c) = (uint)(byte)param_2[0xc];
      *(uint *)(lVar5 + 0x30) = (uint)(byte)param_2[0xd];
      (**(code **)(lVar5 + 8))(param_1,1);
      bVar4 = param_2[0xc];
      bVar6 = param_2[0xd];
    }
    param_4 = param_4 + -0xe;
    if (param_4 == (uint)bVar4 * (uint)bVar6 * 3) {
      return;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x58;
  }
  *(int *)(lVar5 + 0x2c) = param_4;
LAB_00a1b73d:
                    /* WARNING: Could not recover jumptable at 0x00a1b753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(param_1,1);
  return;
}

