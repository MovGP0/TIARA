/* Ghidra address: 00a66260 */
/* Ghidra symbol: FUN_00a66260 */


void FUN_00a66260(longlong param_1,byte param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte local_50 [4];
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_00417600(&local_48,&DAT_00401390,4);
  if (param_3 != 0) {
    uVar2 = FUN_00417840(&local_48,&DAT_00401390,4);
    FUN_00a640f0(param_3,uVar2,3,&local_4c);
    if (param_2 < 0x46) {
      if (param_2 == 0x45) {
        local_50[0] = 0x1a;
      }
      else if (param_2 == 0x43) {
        local_50[0] = 0x12;
      }
      else if (param_2 == 0x44) {
        local_50[0] = 0x16;
      }
    }
    else if (param_2 == 0x4e) {
      local_50[0] = 0x1e;
    }
    else if (param_2 == 0x4f) {
      local_50[0] = 0x22;
    }
    iVar1 = 1;
    pbVar3 = local_50;
    do {
      pbVar3 = pbVar3 + 1;
      *pbVar3 = local_50[iVar1 + -1] + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    (**(code **)**(undefined8 **)(param_1 + 0x30))
              (*(undefined8 **)(param_1 + 0x30),
               *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[0] * 8),local_48,
               *(undefined1 *)(param_1 + 0x58));
    if (local_4c == 1) {
      iVar1 = 3;
      pbVar3 = local_50;
      do {
        pbVar3 = pbVar3 + 1;
        (**(code **)**(undefined8 **)(param_1 + 0x30))
                  (*(undefined8 **)(param_1 + 0x30),
                   *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)*pbVar3 * 8),local_48,
                   *(undefined1 *)(param_1 + 0x58));
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else if (local_4c == 2) {
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[2] * 8),local_48,
                 *(undefined1 *)(param_1 + 0x58));
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[1] * 8),local_40,
                 *(undefined1 *)(param_1 + 0x58));
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[3] * 8),local_40,
                 *(undefined1 *)(param_1 + 0x58));
    }
    else if (local_4c == 3) {
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[2] * 8),local_38,
                 *(undefined1 *)(param_1 + 0x58));
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[1] * 8),local_40,
                 *(undefined1 *)(param_1 + 0x58));
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[3] * 8),local_40,
                 *(undefined1 *)(param_1 + 0x58));
    }
    else if (local_4c == 4) {
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[1] * 8),local_40,
                 *(undefined1 *)(param_1 + 0x58));
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[2] * 8),local_38,
                 *(undefined1 *)(param_1 + 0x58));
      (**(code **)**(undefined8 **)(param_1 + 0x30))
                (*(undefined8 **)(param_1 + 0x30),
                 *(undefined8 *)(PTR_PTR_02002b50 + (ulonglong)local_50[3] * 8),local_30,
                 *(undefined1 *)(param_1 + 0x58));
    }
  }
  FUN_00417840(&local_48,&DAT_00401390,4);
  return;
}

