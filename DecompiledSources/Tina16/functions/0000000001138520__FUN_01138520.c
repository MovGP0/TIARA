/* Ghidra address: 01138520 */
/* Ghidra symbol: FUN_01138520 */


void FUN_01138520(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [96];
  
  local_80 = 0;
  local_78 = 0;
  if (((*(longlong *)(param_2 + 8) == 0) && (*(char *)((longlong)param_1 + 0xa8c) == '\0')) &&
     (*(char *)((longlong)param_1 + 0xa8a) == '\x01')) {
    if (*(longlong *)
         (param_1[0x118] + 0x3c8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7f9) * 0x20 +
         (longlong)(int)param_1[0xfd] * 8) != 0) {
      lVar3 = FUN_0065b870(*(undefined8 *)
                            (param_1[0x118] + 0x3c8 +
                             (ulonglong)*(byte *)((longlong)param_1 + 0x7f9) * 0x20 +
                            (longlong)(int)param_1[0xfd] * 8));
      if (lVar3 == param_1[0x150]) {
        thunk_FUN_041b2403(param_1[0x150],0x534,0,0);
      }
    }
  }
  if (((*(longlong *)(param_2 + 8) == 0) || (*(char *)((longlong)param_1 + 0xa8c) == '\0')) &&
     (*(char *)((longlong)param_1 + 0xa8a) == '\x01')) {
    if (*(longlong *)
         (param_1[0x118] + 0x3c8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7f9) * 0x20 +
         (longlong)(int)param_1[0xfd] * 8) == 0) {
      thunk_FUN_041b2403(param_1[0x150],0x52d,0,0);
    }
    else {
      lVar3 = FUN_0065b870(*(undefined8 *)
                            (param_1[0x118] + 0x3c8 +
                             (ulonglong)*(byte *)((longlong)param_1 + 0x7f9) * 0x20 +
                            (longlong)(int)param_1[0xfd] * 8));
      if (lVar3 != param_1[0x150]) {
        thunk_FUN_041b2403(param_1[0x150],0x52d,0,0);
      }
    }
  }
  cVar1 = FUN_00f83630(param_2,(longlong)param_1 + 0xa92);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[0x143] + 8))((longlong *)param_1[0x143]);
    if ((cVar1 == '\0') &&
       ((*(char *)((longlong)param_1 + 0xa8a) == '\0' ||
        (*(char *)((longlong)param_1 + 0xa8c) != '\0')))) {
      if ((char)param_1[0x141] == '\0') {
        (**(code **)(*(longlong *)param_1[0x143] + 0x10))((longlong *)param_1[0x143],1);
        *(undefined1 *)((longlong)param_1 + 0xa8c) = 0;
        if (*(char *)(param_1[0x133] + 0x328) == '\0') {
          param_1[0x14c] =
               (longlong)
               ((double)param_1[0x145] +
               ((double)(int)param_1[0x14d] * ((double)param_1[0x149] - (double)param_1[0x145])) /
               (double)(int)param_1[0x14b]);
        }
        else {
          dVar5 = (double)FUN_00c42800((double)param_1[0x149] / (double)param_1[0x145]);
          dVar5 = (double)FUN_00c42750((dVar5 / (double)(int)param_1[0x14b]) *
                                       (double)(int)param_1[0x14d]);
          param_1[0x14c] = (longlong)((double)param_1[0x145] * dVar5);
        }
        if ((char)param_1[0x144] == '\0') {
          (**(code **)(*(longlong *)param_1[0x143] + 0xf0))
                    ((longlong *)param_1[0x143],param_1 + 0x14c);
          (**(code **)(*(longlong *)param_1[0x143] + 0xa8))
                    ((longlong *)param_1[0x143],param_1[0x14c]);
          FUN_01136e50(param_1,local_70,param_1[0x14c],*(undefined1 *)(param_1[0x142] + 0x149));
          FUN_004169a0(&local_78,local_70);
          FUN_0064de00(param_1[0x124],local_78);
          if (*(char *)((longlong)param_1 + 0xa0c) == '\x02') {
            FUN_0113a9b0(param_1);
          }
        }
        else {
          (**(code **)(*(longlong *)param_1[0x143] + 0xe0))
                    ((longlong *)param_1[0x143],param_1 + 0x14c);
          (**(code **)(*(longlong *)param_1[0x143] + 0x98))
                    ((longlong *)param_1[0x143],param_1[0x14c]);
          FUN_01136e50(param_1,local_70,param_1[0x14c],9);
          FUN_004169a0(&local_80,local_70);
          FUN_0064de00(param_1[0x125],local_80);
          if (*(char *)((longlong)param_1 + 0xa0c) == '\0') {
            FUN_0113a9b0(param_1);
          }
        }
        *(undefined1 *)((longlong)param_1 + 0xa8b) = 1;
        if (((*(char *)((longlong)param_1 + 0xa0a) == '\0') ||
            ((int)param_1[0x14d] != (int)param_1[0x14b])) &&
           ((*(char *)((longlong)param_1 + 0xa0a) != '\0' || ((int)param_1[0x14d] != 0)))) {
          if (*(char *)((longlong)param_1 + 0xa0a) == '\0') {
            *(int *)(param_1 + 0x14d) = (int)param_1[0x14d] + -1;
          }
          else {
            *(int *)(param_1 + 0x14d) = (int)param_1[0x14d] + 1;
          }
        }
        else if (*(char *)(param_1[0x140] + 0x328) == '\0') {
          *(bool *)((longlong)param_1 + 0xa0a) = *(char *)((longlong)param_1 + 0xa0a) == '\0';
        }
        else {
          *(undefined1 *)(param_1 + 0x141) = 1;
        }
        (**(code **)(*(longlong *)param_1[0x143] + 0x10))((longlong *)param_1[0x143],0);
        uVar4 = FUN_0065b870(param_1);
        uVar2 = FUN_0040c770(((double)param_1[0x14a] * 1000.0) / (double)(int)param_1[0x14b]);
        uVar2 = FUN_00b905e0(uVar2,1);
        FUN_00f832e0(uVar4,0x52c,0,0x7e0,uVar2);
      }
      else {
        FUN_0082a6c0(param_1[0xf8],1);
        (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      }
    }
    else {
      uVar4 = FUN_0065b870(param_1);
      FUN_00f83670(uVar4,param_2);
    }
  }
  FUN_00414560(&local_80,2);
  return;
}

