/* Ghidra address: 00bb17e0 */
/* Ghidra symbol: FUN_00bb17e0 */


void FUN_00bb17e0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  short local_2a [5];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  cVar4 = '\0';
  cVar5 = '\0';
LAB_00bb1b00:
  do {
    cVar1 = (**(code **)(*param_3 + 0x60))(param_3,local_2a);
    if (cVar1 == '\0') {
LAB_00bb1b1b:
      FUN_00414560(&local_58,4);
      return;
    }
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        cVar1 = FUN_00bac6b0(local_2a[0]);
        if (cVar1 == '\0') {
          if (local_2a[0] == 0x3d) {
            cVar4 = '\x02';
          }
          else {
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,4,&local_48,0xffffffff);
            FUN_004134c0(uVar3);
          }
        }
      }
      else if (cVar4 == '\x02') {
        cVar1 = FUN_00bac6b0(local_2a[0]);
        if (cVar1 == '\0') {
          if ((local_2a[0] == 0x22) || (local_2a[0] == 0x27)) {
            cVar4 = '\x03';
            if (local_2a[0] == 0x27) {
              cVar5 = '\x01';
            }
            else {
              cVar5 = '\x02';
            }
          }
          else {
            uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,7,&local_48,0xffffffff);
            FUN_004134c0(uVar3);
          }
        }
      }
      else if (cVar4 == '\x03') {
        if (local_2a[0] == 0x22) {
          if (cVar5 == '\x02') {
            (**(code **)(*param_3 + 0x78))(param_3,&local_58);
            (**(code **)(*param_1 + 0x18))(param_1,local_58);
            goto LAB_00bb1b1b;
          }
          (**(code **)(*param_3 + 0x70))(param_3,0x22);
        }
        else if (local_2a[0] == 0x26) {
          uVar2 = FUN_00baca30(param_3);
          (**(code **)(*param_3 + 0x70))(param_3,uVar2);
        }
        else if (local_2a[0] == 0x27) {
          if (cVar5 == '\x01') {
            (**(code **)(*param_3 + 0x78))(param_3,&local_50);
            (**(code **)(*param_1 + 0x18))(param_1,local_50);
            goto LAB_00bb1b1b;
          }
          (**(code **)(*param_3 + 0x70))(param_3,0x27);
        }
        else if (local_2a[0] == 0x3c) {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0xb,&local_48,0xffffffff);
          FUN_004134c0(uVar3);
        }
        else {
          (**(code **)(*param_3 + 0x70))(param_3,local_2a[0]);
        }
      }
      goto LAB_00bb1b00;
    }
    cVar1 = FUN_00bac6b0(local_2a[0]);
    if (cVar1 == '\0') {
      if (local_2a[0] == 0x3d) {
        (**(code **)(*param_3 + 0x78))(param_3,&local_48);
        FUN_00bb1520(param_1,local_48);
        cVar4 = '\x02';
      }
      else {
        cVar1 = FUN_00bac6f0(local_2a[0]);
        if (cVar1 == '\0') {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,10,&local_48,0xffffffff);
          FUN_004134c0(uVar3);
        }
        else {
          (**(code **)(*param_3 + 0x70))(param_3,local_2a[0]);
        }
      }
    }
    else {
      (**(code **)(*param_3 + 0x78))(param_3,local_40);
      FUN_00bb1520(param_1,local_40[0]);
      cVar4 = '\x01';
    }
  } while( true );
}

