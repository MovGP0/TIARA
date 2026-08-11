/* Ghidra address: 00dab100 */
/* Ghidra symbol: FUN_00dab100 */


void FUN_00dab100(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9,char param_10,
                 double *param_11,double *param_12,undefined8 *param_13,undefined8 *param_14,
                 char param_15,char param_16)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60 [11];
  
  param_4 = param_4 + param_6;
  param_3 = param_3 - param_5;
  if (param_10 != '\0') {
    param_7 = param_7 * (param_3 - param_4);
    param_8 = param_8 * (param_3 - param_4);
  }
  dVar1 = param_3 - param_7;
  dVar2 = param_4 + param_8;
  if ((param_15 != '\0') || (0.0 < dVar1 - dVar2)) {
    dVar3 = param_9 * (param_2 + param_1);
    if ((param_15 == '\x01') || (dVar2 <= dVar3)) {
      if ((param_15 == '\x02') || (dVar3 <= dVar1)) {
        local_68 = param_9;
        local_70 = 0;
        local_78 = 0;
        local_60[0] = dVar3;
      }
      else {
        local_70 = 0;
        if (param_3 + param_7 <= dVar3) {
          local_68 = 0.0;
          local_78 = 0x3ff0000000000000;
          local_60[0] = param_3;
        }
        else {
          FUN_00daa300(dVar3,param_3,param_3,param_7,0x3ff0000000000000,0,local_60,&local_68);
          local_68 = param_9 * local_68;
          FUN_00daa950(dVar3,dVar1,0,param_3 + param_7,0x3ff0000000000000,&local_78,local_80);
          if ((param_16 == '\0') && (local_60[0] = dVar3, param_3 <= dVar3)) {
            local_60[0] = param_3;
          }
        }
      }
    }
    else {
      local_78 = 0;
      if (dVar3 <= param_4 - param_8) {
        local_68 = 0.0;
        local_70 = 0x3ff0000000000000;
        local_60[0] = param_4;
      }
      else {
        FUN_00daa300(dVar3,param_4,param_4,param_8,0,0x3ff0000000000000,local_60,&local_68);
        local_68 = param_9 * local_68;
        FUN_00daa950(dVar3,param_4 - param_8,0x3ff0000000000000,dVar2,0,&local_70,local_80);
        if ((param_16 == '\0') && (local_60[0] = dVar3, dVar3 <= param_4)) {
          local_60[0] = param_4;
        }
      }
    }
  }
  else {
    local_68 = 0.0;
    local_70 = 0x3ff0000000000000;
    local_78 = 0x3ff0000000000000;
    local_60[0] = param_4;
  }
  *param_11 = local_60[0];
  *param_12 = local_68;
  *param_13 = local_70;
  *param_14 = local_78;
  return;
}

