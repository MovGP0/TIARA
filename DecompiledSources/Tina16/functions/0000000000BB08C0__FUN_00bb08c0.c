/* Ghidra address: 00bb08c0 */
/* Ghidra symbol: FUN_00bb08c0 */


void FUN_00bb08c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  short local_2a [5];
  
  local_58 = 0;
  local_60 = (longlong *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  cVar5 = '\0';
LAB_00bb0c4e:
  do {
    cVar1 = (**(code **)(*param_3 + 0x60))(param_3,local_2a);
    if (cVar1 == '\0') {
code_r0x00bb0c69:
      if (local_2a[0] != 0x3e) {
        uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x34,&local_50,0xffffffff);
        FUN_004134c0(uVar3);
      }
      FUN_0041b800(&local_60);
      FUN_0041b800(&local_58);
      FUN_00414560(&local_50,3);
      return;
    }
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        cVar1 = FUN_00bac6b0(local_2a[0]);
        if (cVar1 == '\0') {
          if (local_2a[0] == 0x2f) {
            cVar5 = '\x02';
          }
          else {
            if (local_2a[0] == 0x3e) {
              if (param_1 == 0) {
                lVar4 = 0;
              }
              else {
                lVar4 = param_1 + 0x10;
              }
              FUN_004b0600(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xb8),lVar4);
              (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                        (*(longlong **)(param_1 + 0x18),param_1,param_3);
              goto code_r0x00bb0c69;
            }
            cVar1 = FUN_00bac690(local_2a[0]);
            if ((cVar1 == '\0') && (local_2a[0] != 0x5f)) {
              uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,9,&local_50,0xffffffff);
              FUN_004134c0(uVar3);
            }
            else {
              (**(code **)(*param_3 + 0x88))(param_3);
              (**(code **)(*param_3 + 0x70))(param_3,local_2a[0]);
              plVar2 = (longlong *)FUN_00bb3340(*(undefined8 *)(param_1 + 0x18),0);
              FUN_00baec20(param_1,&local_60);
              if (plVar2 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                plVar6 = plVar2 + 10;
              }
              (**(code **)(*local_60 + 0x68))(local_60,&local_58,plVar6);
              if (param_1 == 0) {
                lVar4 = 0;
              }
              else {
                lVar4 = param_1 + 0x50;
              }
              FUN_00bae6b0(plVar2,lVar4);
              (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_3);
            }
          }
        }
      }
      else if (cVar5 == '\x02') {
        if (local_2a[0] == 0x3e) goto code_r0x00bb0c69;
        cVar1 = FUN_00bac6b0(local_2a[0]);
        if (cVar1 == '\0') {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0xf,&local_50,0xffffffff);
          FUN_004134c0(uVar3);
        }
        else {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x18,&local_50,0xffffffff);
          FUN_004134c0(uVar3);
        }
      }
      goto LAB_00bb0c4e;
    }
    cVar1 = FUN_00bac6b0(local_2a[0]);
    if (cVar1 == '\0') {
      if (local_2a[0] == 0x2f) {
        (**(code **)(*param_3 + 0x78))(param_3,&local_48);
        FUN_00bb03d0(param_1,local_48);
        cVar5 = '\x02';
      }
      else {
        if (local_2a[0] == 0x3e) {
          (**(code **)(*param_3 + 0x78))(param_3,&local_50);
          FUN_00bb03d0(param_1,local_50);
          if (param_1 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = param_1 + 0x10;
          }
          FUN_004b0600(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xb8),lVar4);
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                    (*(longlong **)(param_1 + 0x18),param_1,param_3);
          goto code_r0x00bb0c69;
        }
        cVar1 = FUN_00bac6f0(local_2a[0]);
        if (cVar1 == '\0') {
          uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,10,&local_50,0xffffffff);
          FUN_004134c0(uVar3);
        }
        else {
          (**(code **)(*param_3 + 0x70))(param_3,local_2a[0]);
        }
      }
    }
    else {
      (**(code **)(*param_3 + 0x78))(param_3,local_40);
      FUN_00bb03d0(param_1,local_40[0]);
      cVar5 = '\x01';
    }
  } while( true );
}

